# Git
```bash
# Usuario en git
git config --global user.name "nombre"
git config --global user.email "correo"

# Para devolver commits, sin ''
git reset --hard 'SHA code'
git push origin 'branch name' -f

# Init
git init
git push -u origin main
```



# venv - Python
```Python
# Quitar requisitos de scripts en powershell (admin)
Get-ExecutionPolicy
Set-ExecutionPolicy unrestricted

# Crear carpeta de entorno virtual 
# cmd debe estar en la carpeta donde se desea guardar a .venv
py -m venv .venv_nombre

# Activar
.venv_nombre/Scripts/Activate.ps1

# Desactivar
deactivate

# Tener cuidado cuando se instalen nuevas librerias ya que VSC puede tener abierto un .venv de otro proyecto.
```