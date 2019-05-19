find . -name "*.sh" | sed 's!/!\
!g' | grep ".sh" | cut -f 1 -d "."
