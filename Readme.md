# Advanced GIT - projects
Authors - Igor Sala & Maksymilian Walicki

## Project number 1 - payment methods (at least 1h of work)


#### Description
Imagine you're working in e-commerce company and your clients has different payment methods. You have to implement (simulate) payment by credit card or by bank transfer, **but be aware that in the future there might be other methods for payment (design patterns in real life problem)** that users might prefer f.e in cryptocurrency. It should be done in pairs to practice git simple workflow methods.

#### What are the goals of finishing this project?
- Basic knowledge of git workflow methods
- Practicing team collaboration with git  

#### Where can I find needed knowledge?
We recommend looking at our course videos titled:

- "Workflows"
- "Basics" (optionally)
- "Branches"
- "Remotes"
- "Design Patterns" (read more here: https://refactoring.guru/design-patterns/java)

If you have any troubles during merging look at: "Debugging and Tracking Changes".

#### How should program work in its final version?
There are many possible solutions to this project. We want you to practice teamwork with GIT. We believe that topic is self-explainatory.

## Project number 2 - manageThat (at least 2h of work)
https://github.com/mroki58/manageThat

#### Description
Your exercise is to make program run and implement every function properly using git tools.

#### What are the goals of finishing this project?
- Feeling freely with merging, branching and managing conflict in GIT using commandline 
or tools.
#### Where can I find needed knowledge?
We believe that every section in our course  that resolves around GIT is needed to complete this project.
 
You can also use rerere for not resolving conflict again later: https://git-scm.com/book/be/v2/Git-Tools-Rerere



#### Tips

Firstly look in the commit history where functions were implemented, and try to merge those changes to master branch. You have to do this without writing your own implementation of functions.

#### How should program work in its final version?

Firstly change in main.cpp path to catalog created on your desktop and then, in that file new catalog will be created with .txt file which contents are "`Tekst do pliku b1\nTekst do pliku b2`" 


#### How can I start?

Please clone this repository to directory on your machine. Then in your terminal write:

    for branch in $(git branch -r | grep -v '\->'); do \
    git branch --track ${branch#origin/} $branch \
    done

Script above will create local branches so you don't have to do it yourself.


# Literature used in course
GIT & workflows
https://git-scm.com/docs

Design patterns:
https://refactoring.guru/design-patterns/java
https://www.youtube.com/watch?v=tv-_1er1mWI


## Music & Sounds
All music used in project is copyright free.
