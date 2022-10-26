#pragma once
#include <SFML/Graphics.hpp>
#include <math.h>
#include "Coordenadas.h"
#include <map>

namespace Gerenciadores {
	class GerenteGrafico
	{
	private:
		sf::RenderWindow* window;
		sf::View  view;
		std::map<const char*, sf::Texture*> texturesMap;
		sf::Font* font;
		sf::Clock clock;
		static float dt;

		static Gerenciadores::GerenteGrafico* instance;

		GerenteGrafico(); // <--- PUBLIC??
	public:
		
		~GerenteGrafico();
		
		static GerenteGrafico* getInstance();

		void render(sf::RectangleShape* body);
		void render(sf::Text* text);
		void display();
		void clear();
		bool isWindowOpen() const;
		void closeWindow();
		void handleWindowResize();

		sf::Vector2u getWindowSize() const;

		void CenterView(Matematica::CoordF pos);
		sf::Texture* loadTexture(const char* path);

		sf::Font* getFont();

		void updateDeltaTime();

	};

}