#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }
    // Getter and Setter for score
       int getScore() const;
       void setScore(int newScore);

    void tick();
protected:
    ModelListener* modelListener;

    int score; // The shared score variable
};

#endif // MODEL_HPP
