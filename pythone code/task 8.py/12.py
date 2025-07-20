def celsius_to_fahrenheit(*temperatures):
    return [(temp * 9/5) + 32 for temp in temperatures]


celsius_temps = [0, 10, 20, 30, 40]
fahrenheit_temps = celsius_to_fahrenheit(*celsius_temps)

print(f"Celsius Temperatures: {celsius_temps}")
print(f"Fahrenheit Temperatures: {fahrenheit_temps}")
