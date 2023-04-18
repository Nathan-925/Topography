/*
 * Noise.h
 *
 *  Created on: Apr 18, 2023
 *      Author: Nathan
 */

#ifndef NOISE_H_
#define NOISE_H_

namespace mut{

	template<int dimensions>
	class Noise{

		Noise(unsigned int seed = 1u);
		virtual ~Noise();

		virtual double get(double position...);

	};

}

#endif /* NOISE_H_ */
