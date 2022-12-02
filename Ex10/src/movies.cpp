#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

/*
//All data types will be in int/string due to complexity of vector pushing cat/bool
struct Movie {
  int year;
  int length;
  string title;
  string subject;
  string actor;
  string actress;
  string director;
  string popularity;
  int awards;
  string image;
};
*/

struct Subject
{
    string subject;
    Subject(string s)
    {
        subject = s;
    }
};

struct Actor
{
    string name;
    Actor(string s)
    {
        name = s;
    }
};

struct Actress
{
    string name;
    Actress(string s)
    {
        name = s;
    }
};

struct Director
{
    string name;
    Director(string s)
    {
        name = s;
    }
};

struct Movie
{
    int year;
    int length;
    string title;
    Subject subject = Subject("");
    Actor actor = Actor("");
    Actress actress = Actress("");
    Director director = Director("");
    int popularity;
    bool award;
    string image;
    bool operator<(const Movie &other) const
    {
        return popularity > other.popularity;
    }
};

/*
  vector<int> vecYear, vecLength, vecAwards;
  vector<string> vecTitle, vecSubject, vecActor, vecActress, vecDirector, vecPopularity, vecImage;
*/

  /*
  while(input.good()) {
    //save the input line to line
    getline(input, year, ';');
    getline(input, length, ';');
    getline(input, title, ';');
    getline(input, subject, ';');
    getline(input, actor, ';');
    getline(input, actress, ';');
    getline(input, director, ';');
    getline(input, popularity, ';');
    getline(input, awards, ';');
    getline(input, image, '\n');
    
    vecYear.push_back(stoi(year));
    vecLength.push_back(stoi(length));
    vecTitle.push_back(title);
    vecSubject.push_back(subject);
    vecActor.push_back(actor);
    vecActress.push_back(actress);
    vecDirector.push_back(director);
    vecPopularity.push_back(popularity);
    vecAwards.push_back(stoi(awards));
    vecImage.push_back(image);
  }
  */
  
  vector<string> splitStr(string str, char dm)
{
    vector<string> res;
    string s = "";
    for (auto x : str)
    {
        if (x == dm)
        {
            res.push_back(s);
            s = "";
        }
        else
        {
            s = s + x;
        }
    }
    res.push_back(s);
    return res;
}
  /*
  ifstream myfile;
  myfile.open("outputmovie.txt");
  */

Movie makeMovies(vector<string> data)
{

    Movie movie;
    movie.year = data[0] == "" ? 0 : stoi(data[0]);
    movie.length = data[1] == "" ? 0 : stoi(data[1]);
    movie.title = data[2];
    /* Assigning the subject of the movie to the data[3] which is the subject of the movie. */
    movie.subject = Subject(data[3]);
    movie.actor = Actor(data[4]);
    movie.actress = Actress(data[5]);
    movie.director = Director(data[6]);
    movie.popularity = data[7] == "" ? 0 : stoi(data[7]);
    movie.award = (data[8] == "No" ? false : true);
    movie.image = data[9];

    return movie;
}

//accumulate algorithm
int sumAccumulate(vector<Movie> movies, int size) {

    int lengths[size];
    int i = 0;
  
    for (auto m : movies) {
        lengths[i] = m.length;
        i++;
    }
  
    int count = 0;
    int res = accumulate(lengths, lengths + size, count);
    return res;
}

//sort algorithm
vector<Movie> sort(vector<Movie> movies)
{
    vector<Movie> moviesCopy = movies;
    sort(moviesCopy.begin(), moviesCopy.end());
    return moviesCopy;
}

//find algorithm
string find(vector<Movie> movies, string name)
{
    for (auto m : movies)
    {
        string directorName = m.director.name;

        if (directorName.find(name) != -1)
        {
            return directorName;
        }
    }
    return "No result found";
}

//unique algorithm
vector<vector<int>> unique(vector<Movie> movies, string subject1, string subject2)
{
    vector<vector<int>> res;
    vector<int> years1;
    vector<int> years2;

    for (auto movie : movies)
    {
        if (movie.subject.subject == subject1)
            years1.push_back(movie.year);
        else if (movie.subject.subject == subject2)
            years2.push_back(movie.year);
    }

    sort(years1.begin(), years1.end());
    vector<int>::iterator it;
    it = unique(years1.begin(), years1.end());
    years1.resize(distance(years1.begin(), it));

    sort(years2.begin(), years2.end());
    vector<int>::iterator it2;

    it2 = unique(years2.begin(), years2.end());
    years2.resize(distance(years2.begin(), it2));

    res.push_back(years1);
    res.push_back(years2);

    return res;
}

//equal algorithm
bool equal(vector<int> years1, vector<int> years2)
{
    int *y1 = &years1[0];
    return (equal(years2.begin(), years2.end(), y1));
}  

int main() {
  vector<Movie> movies;
  
  ifstream file("film.csv.txt");
  
  string str = "";
  
  getline(file, str);
  getline(file, str);
  
  vector<string> strs;
  
   while (file.good())
    {
        getline(file, str);
        strs = splitStr(str, ';');
        Movie movie = makeMovies(strs);
        movies.push_back(movie);
    }

    cout << "Part 2a" << endl;

  int totalLength = sumAccumulate(movies, movies.size());
    cout << "The sum the total length of all movies: ";
    cout << totalLength << endl;
  
   cout << "Part 2b" << endl;
  
  vector<Movie> sortedMvs = sort(movies);
    cout << " Popularity   |      Movie Title" << endl;
    for (auto movie : sortedMvs)
    {
        printf("%-10s", ("     " + to_string(movie.popularity)).c_str());
        cout << "    |   ";
        printf("%-40s", movie.title.c_str());
        cout << endl;
    }

    cout << "Part 2c" << endl;

    string myFind = find(movies, "Besson");
    cout << "Finding keyword: 'Besson'" << endl;
    cout << myFind << endl;

    cout << "Part 2d" << endl;

    string subject1 = "Action";
    string subject2 = "Comedy";
    vector<vector<int>> uniqueYears;
    bool isEqualYearsInUniques;
    uniqueYears = unique(movies, subject1, subject2);
    cout << "Release years of " << subject1 << " movies: ";
    for (int year : uniqueYears[0])
        cout << to_string(year) << ", ";

    cout << endl;
    cout << "Release years of " << subject2 << " movies: ";
    for (int year : uniqueYears[1])
        cout << to_string(year) << ", ";

    cout << endl;
    isEqualYearsInUniques = equal(uniqueYears[0], uniqueYears[1]);

    cout << "Release years of " << subject1 << " and " << subject2 << " movies are "
         << (isEqualYearsInUniques ? "equal. " : "not equal. ") << endl;

    return 0;
}

