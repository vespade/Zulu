# Might need this,casue ps big waa waa babby
# PowerShell.exe -ExecutionPolicy Bypass -File

# For references
# ACE -> (New-Item -ItemType Junction -Path "P:\z\ace\addons" -Target "C:\Users\namenai\Documents\repos\ACE3\addons")
# Load configuration variables.
. .\config.ps1

# Change directory to mod source.
Set-Location $sourceDir

# Files we give a hoot about
$files = Get-ChildItem -Path ./ -Name -Filter "V*"

# Do the Lords' work
foreach ($file in $files) {
    $FromWhere = "$sourceDir\$file"
    $ToWhere = "P:\"+$file

    echo "Link "$ToWhere" to "$FromWhere
    New-Item -ItemType Junction -Path $ToWhere -Target $FromWhere

    # Just so that window doesnt close on us.
    # Read-Host -Prompt "Enter to die?"
}

Read-Host -Prompt "Press Enter to exit"