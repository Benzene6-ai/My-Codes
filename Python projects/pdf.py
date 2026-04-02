from fpdf import FPDF

class PDF(FPDF):
    def header(self):
        self.set_font("Arial", "B", 14)
        self.cell(0, 10, "Java Schlüsselwörter & Begriffe – Englisch ↔ Deutsch", ln=True, align="C")
        self.ln(5)

    def chapter_title(self, title):
        self.set_font("Arial", "B", 12)
        self.cell(0, 10, title, ln=True)
        self.ln(2)

    def chapter_body(self, body):
        self.set_font("Arial", "", 10)
        self.multi_cell(0, 8, body)
        self.ln()

pdf = PDF()
pdf.add_page()

# Kapitel 1: Schlüsselwörter
pdf.chapter_title("🔑 Java-Schlüsselwörter (Keywords)")
keywords = [
    ("class", "Klasse", "Definiert eine Klasse"),
    ("public", "öffentlich", "Zugriffsmodifikator: von überall sichtbar"),
    ("private", "privat", "Nur innerhalb der Klasse zugänglich"),
    ("protected", "geschützt", "Zugänglich im Paket oder durch Vererbung"),
    ("static", "statisch", "Gehört zur Klasse, nicht zum Objekt"),
    ("void", "leer", "Gibt keinen Rückgabewert zurück"),
    ("int", "ganze Zahl", "Datentyp für ganze Zahlen"),
    ("double", "Gleitkommazahl", "Datentyp für Dezimalzahlen"),
    ("boolean", "Wahrheitswert", "`true` oder `false`"),
    ("if", "wenn", "Führt Code aus, wenn Bedingung wahr ist"),
    ("else", "sonst", "Alternative Anweisung, wenn `if` falsch ist"),
    ("while", "solange", "Schleife mit Bedingung"),
    ("for", "für", "Schleife mit Zähler"),
    ("break", "abbrechen", "Beendet Schleifen oder `switch`"),
    ("continue", "fortfahren", "Überspringt den aktuellen Schleifendurchlauf"),
    ("return", "zurückgeben", "Gibt einen Wert aus einer Methode zurück"),
    ("new", "neu", "Erstellt ein neues Objekt"),
    ("this", "dieses", "Verweist auf das aktuelle Objekt"),
    ("super", "super", "Verweist auf die Oberklasse"),
    ("null", "null", "Kein Objekt / Leere Referenz"),
    ("try", "versuchen", "Beginnt einen Ausnahmebehandlungsblock"),
    ("catch", "auffangen", "Behandelt eine Ausnahme"),
    ("finally", "schließlich", "Wird immer ausgeführt"),
    ("throw", "werfen", "Löst eine Ausnahme aus"),
    ("throws", "wirft", "Deklariert, dass Methode eine Ausnahme werfen kann"),
    ("abstract", "abstrakt", "Kann nicht instanziiert werden"),
    ("interface", "Schnittstelle", "Definiert Methoden ohne Implementierung"),
    ("implements", "implementiert", "Implementiert eine Schnittstelle"),
    ("extends", "erweitert", "Erbt von einer Klasse"),
    ("final", "endgültig", "Kann nicht verändert/überschrieben werden"),
    ("instanceof", "ist von Typ", "Prüft Objekt-Typ"),
    ("import", "importieren", "Importiert Klassen oder Pakete"),
    ("package", "Paket", "Definiert das Paket der Klasse"),
    ("enum", "Aufzählung", "Definiert feste Konstanten"),
    ("synchronized", "synchronisiert", "Wird für Threads verwendet"),
    ("volatile", "volatil", "Mehrere Threads können Variable verändern")
]

for en, de, desc in keywords:
    pdf.chapter_body(f"{en:<12} = {de:<15} → {desc}")

# Kapitel 2: Weitere Begriffe
pdf.chapter_title("📘 Weitere wichtige Begriffe")
terms = [
    ("Object", "Objekt", "Instanz einer Klasse"),
    ("Method", "Methode", "Funktion in einer Klasse"),
    ("Constructor", "Konstruktor", "Zur Objekterstellung"),
    ("Overloading", "Überladen", "Gleiche Methode, andere Parameter"),
    ("Overriding", "Überschreiben", "Methode in Unterklasse neu definieren"),
    ("Inheritance", "Vererbung", "Eigenschaften/Methode übernehmen"),
    ("Polymorphism", "Polymorphismus", "Unterschiedliche Umsetzung"),
    ("Encapsulation", "Kapselung", "Innere Daten schützen"),
    ("Exception", "Ausnahme", "Fehlerbehandlung"),
    ("Thread", "Thread", "Nebenläufige Ausführung"),
    ("Collection", "Sammlung", "Datenstruktur wie Liste, Map, Set")
]

for en, de, desc in terms:
    pdf.chapter_body(f"{en:<14} = {de:<15} → {desc}")

# PDF speichern
pdf.output("Java_Schluesselwoerter_Deutsch_Englisch.pdf")
