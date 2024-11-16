# Supporting-work-1-DS-SES

# Εκμάθηση Structs στη C

Αυτό το project έχει σχεδιαστεί για να βοηθήσει στην κατανόηση και εξάσκηση της χρήσης των structs στη γλώσσα προγραμματισμού C.

## Περιεχόμενα

1. [Εισαγωγή στα Structs](#εισαγωγή-στα-structs)
2. [Αρχεία του Project](#αρχεία-του-project)
3. [Οδηγίες Χρήσης](#οδηγίες-χρήσης)

## Εισαγωγή στα Structs

Στη γλώσσα προγραμματισμού C, ένα struct (από το "structure") είναι ένας τρόπος ομαδοποίησης μεταβλητών διαφορετικών τύπων υπό ένα κοινό όνομα. Αυτό επιτρέπει τη δημιουργία σύνθετων τύπων δεδομένων που αναπαριστούν αντικείμενα του πραγματικού κόσμου με πολλαπλά χαρακτηριστικά[4].

Τα structs προσφέρουν πολλά πλεονεκτήματα:
- Επιτρέπουν την οργάνωση σχετικών δεδομένων σε μια ενιαία οντότητα.
- Διευκολύνουν τη διαχείριση και μεταφορά πολύπλοκων δεδομένων μέσα σε ένα πρόγραμμα.
- Βελτιώνουν την αναγνωσιμότητα και τη συντήρηση του κώδικα.
- Παρέχουν έναν τρόπο δημιουργίας προσαρμοσμένων τύπων δεδομένων.

## Δομή και Χρήση των Structs στη C

- Τα structs στη C είναι ένας σύνθετος τύπος δεδομένων που επιτρέπει την ομαδοποίηση διαφορετικών τύπων δεδομένων υπό ένα κοινό όνομα.
- Η βασική δομή ενός struct είναι η εξής:

```c
struct tag_name {
    data_type member1;
    data_type member2;
    ...
    data_type memberN;
};
```

## Αρχεία του Project

1. `structs_example.c`: Βασικό παράδειγμα χρήσης structs για τη διαχείριση ενός καταλόγου βιβλιοθήκης[2].
2. `Struct_static_example.c`: Παράδειγμα στατικής αρχικοποίησης structs με πραγματικά δεδομένα βιβλίων[3].
3. `delete_from_a_struct.c`: Παράδειγμα διαγραφής στοιχείων από ένα struct[1].
4. `structs.txt`: Επιπλέον πληροφορίες και επεξηγήσεις για τα structs[4].

## Οδηγίες Χρήσης

1. Κλωνοποιήστε αυτό το repository στον υπολογιστή σας.
2. Μεταγλωττίστε τα αρχεία .c χρησιμοποιώντας έναν C compiler, π.χ.: gcc structs_example.c -o structs_example
3. Εκτελέστε το πρόγραμμα: ./structs_example
4. Μελετήστε τον κώδικα και πειραματιστείτε με τις δικές σας τροποποιήσεις.

