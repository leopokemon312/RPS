









import random

def get_computer_choice() :
    """Generate the computer's choice."""
    choice = random.randint(1, 3)
    if choice == 1 :
        return "rock"
        elif choice == 2 :
        return "paper"
    else:
return "scissors"

def get_user_choice() :
    """Get the user's choice."""
    print("Choose one of the following:")
    print("1. Rock")
    print("2. Paper")
    print("3. Scissors")
    choice = input("Enter your choice (rock, paper, or scissors): ").lower()
    while choice not in["rock", "paper", "scissors"]:
print("Invalid choice. Please try again.")
choice = input("Enter your choice (rock, paper, or scissors): ").lower()
return choice

def determine_winner(user_choice, computer_choice) :
    """Determine the winner."""
    if user_choice == computer_choice :
        return "tie"
        elif(user_choice == "rock" and computer_choice == "scissors") or \
        (user_choice == "scissors" and computer_choice == "paper") or \
        (user_choice == "paper" and computer_choice == "rock") :
        return "user"
    else:
return "computer"

def play_game() :
    """Play a round of Rock, Paper, Scissors."""
    while True :
        computer_choice = get_computer_choice()
        user_choice = get_user_choice()

        print(f"\nThe computer chose: {computer_choice}")
        winner = determine_winner(user_choice, computer_choice)

        if winner == "tie":
print("It's a tie! Let's play again.\n")
elif winner == "user" :
    print("You win!")
    break
        else:
print("The computer wins!")
break

# Start the game
play_game()
