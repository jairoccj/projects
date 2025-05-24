esqueleto = input()
classe = input()
dieta = input()
match esqueleto:
    case "vertebrado":
        match classe:
            case "ave":
                match dieta:
                    case "carnivoro":
                        print("aguia")
                    case "onivoro":
                        print("pomba")
            case "mamifero":
                match dieta:
                    case "onivoro":
                        print("homem")
                    case "herbivoro":
                        print("vaca")
    case "invertebrado":
        match classe:
            case "inseto":
                match dieta:
                    case "hematofago":
                        print("pulga")
                    case "herbivoro":
                        print("lagarta")
            case "anelideo":
                match dieta:
                    case "hematofago":
                        print("sanguessuga")
                    case "onivoro":
                        print("minhoca")