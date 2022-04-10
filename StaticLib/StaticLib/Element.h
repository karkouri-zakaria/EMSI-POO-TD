		#pragma once
		template<class T>
		class Element
		{
		public:
			T	Data;
			Element<T>* next;
		};