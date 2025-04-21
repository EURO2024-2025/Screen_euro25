#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model::Model() : modelListener(0)
{

}

void Model::tick()
{

}

int Model::getScore() const
{
    return score;
}

void Model::setScore(int newScore)
{
    score = newScore;
}
