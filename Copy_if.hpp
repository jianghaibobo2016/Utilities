/*
 * Copy_if.h
 *
 *  Created on: Aug 5, 2018
 *      Author: jhb
 */

#ifndef COPY_IF_HPP_
#define COPY_IF_HPP_

template<typename InputIterator, typename OutputIterator, typename Predicate>
OutputIterator copy_if(InputIterator begin, InputIterator end,
		OutputIterator destBegin, Predicate p) {
	while (begin != end) {
		if (p(*begin))
			*destBegin++ = *begin;
		begin++;
	}
	return destBegin;
}

#endif /* COPY_IF_HPP_ */
