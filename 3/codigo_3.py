import json

def calcular_faturamento(faturamento_diario):
   
    faturamento_diario = [dia["valor"] for dia in faturamento_diario if dia["valor"] > 0]

   
    menor_faturamento = min(faturamento_diario)
    maior_faturamento = max(faturamento_diario)

    
    media_mensal = sum(faturamento_diario) / len(faturamento_diario)

    
    dias_acima_da_media = len([valor for valor in faturamento_diario if valor > media_mensal])

    return menor_faturamento, maior_faturamento, dias_acima_da_media

with open('faturamento.json', 'r') as file:
    dados_faturamento = json.load(file)

faturamento_diario = dados_faturamento["faturamento"]

menor, maior, dias_acima_media = calcular_faturamento(faturamento_diario)

print(f"Menor faturamento: R$ {menor:.2f}")
print(f"Maior faturamento: R$ {maior:.2f}")
print(f"Dias com faturamento acima da média: {dias_acima_media}")