seconds = int(input())
hours = seconds // 3600
minutes = seconds % 3600 // 60
show_seconds = seconds % 3600 % 60
print(f"{hours}:{minutes}:{show_seconds}")