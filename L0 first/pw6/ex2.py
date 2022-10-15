country = {'FR': 'France' , 'DE': 'Germany',
         'ES': 'Spain', 'GB': 'England'}
print(country["DE"])
# assert "IT" in country
# print(country["IT"])
country["IT"] = "Italy"
country["GB"] = "United Kingdom"
for i in country.items():
    print(i)

