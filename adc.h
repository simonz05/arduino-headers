/*
 * This file is part of arduino-headers.
 *
 * arduino-headers is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or(at your option) any later version.
 *
 * arduino-headers is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with arduino-headers.  If not, see <http://www.gnu.org/licenses/>.
 */

#if defined(__AVR_ATmega8__)
#  include <arduino/ATmega8/adc.h>
#elif defined(__AVR_ATmega168__) \
   || defined(__AVR_ATmega328P__)
#  include <arduino/ATmegaX8/adc.h>
#elif defined(__AVR_ATmega1280__)
#  error "arduino/adc.h: Not implemented for ATmega1280 chips yet"
#elif defined(__AVR_ATtiny25__) \
   || defined(__AVR_ATtiny45__) \
   || defined(__AVR_ATtiny85__)
#  error "arduino/adc.h: Not implemented for ATtiny25/45/85 chips yet"
#else
#  error "arduino/adc.h: Unknown chip type"
#endif
