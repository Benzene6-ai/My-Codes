# enregistrement.py
students = []

def register_student():
    print("\n--- ENREGISTREMENT CANDIDAT ---")
    name = input("Nom complet: ")
    matricule = input("Numéro de matricule: ")
    subjects = input("Matières choisies (séparées par des virgules): ").split(',')

    student = {
        "name": name.strip(),
        "matricule": matricule.strip(),
        "subjects": [s.strip() for s in subjects]
    }

    students.append(student)
    print("Inscription réussie!")

def view_schedule():
    print("\n--- CONSULTER EMPLOI DE TEMPS ---")
    matricule = input("Entrez votre numéro de matricule: ")

    found = False
    for student in students:
        if student["matricule"] == matricule:
            found = True
            print(f"Nom: {student['name']}")
            print("Matières inscrites:")
            for subject in student["subjects"]:
                print(f"- {subject}")
            print("Les horaires seront communiqués plus tard.")
            break
    if not found:
        print("Étudiant non trouvé.")

def main():
    while True:
        print("\n1. Enregistrer un candidat")
        print("2. Voir emploi de temps")
        print("3. Quitter")

        choice = input("Choix: ")

        if choice == '1':
            register_student()
        elif choice == '2':
            view_schedule()
        elif choice == '3':
            break
        else:
            print("Choix invalide.")

main()
