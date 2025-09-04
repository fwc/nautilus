/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5088
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5088
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<signed char> var_0, val<long long int> var_1, val<unsigned char> var_2, val<short> var_3, val<long long int> var_4, val<int> var_5, val<int> var_6, val<unsigned short> var_7, val<unsigned char> var_8, val<bool> var_9, val<long long int> var_10, val<signed char> var_12, val<short> var_13, val<unsigned int> var_14, val<int> var_15, val<unsigned long long int> var_16, val<int> var_17, val<int> zero, val<unsigned long long int*> var_18, val<unsigned long long int*> var_19, val<signed char*> var_20) {
    *var_18 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_15)) ? (var_14) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2)))))) ? (((((/* implicit */val<bool>) 2075686131)) ? (((/* implicit */val<int>) (val<short>)-32358)) : (((/* implicit */val<int>) var_9)))) : (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_12)) : (1469396922)))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (-2075686132) : (((/* implicit */val<int>) var_8))))) ? (((((/* implicit */val<bool>) var_13)) ? (var_6) : (var_15))) : (((((/* implicit */val<bool>) (val<signed char>)-79)) ? (var_15) : (((/* implicit */val<int>) var_13)))))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) (val<unsigned short>)22)) : (((/* implicit */val<int>) var_7))))) ? (((((/* implicit */val<bool>) 17558903486671650510ULL)) ? (var_15) : (((/* implicit */val<int>) var_3)))) : (((((/* implicit */val<bool>) 20U)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_9))))))));
    *var_19 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)15650)) ? (((/* implicit */val<int>) (val<signed char>)-107)) : (((/* implicit */val<int>) (val<bool>)1))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (var_17) : (((/* implicit */val<int>) var_7))))) ? (((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_7)))) : (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) (val<unsigned short>)31)) : (var_17)))))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_13)) ? (var_17) : (((/* implicit */val<int>) var_3))))) ? (((((/* implicit */val<bool>) var_1)) ? (var_16) : (((/* implicit */val<unsigned long long int>) 268435454)))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<unsigned char>)108)) ? (4294967275U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)(-127 - 1))))))))));
    *var_20 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (-2075686131) : (((/* implicit */val<int>) var_7))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 2075686137)) ? (var_5) : (var_15)))) : (((((/* implicit */val<bool>) var_10)) ? (var_16) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1)))))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)0)) ? (((/* implicit */val<unsigned long long int>) 63)) : (14838859020231887493ULL)))) ? (-2075686151) : (-2075686121)))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 3607885053477664121ULL)) ? (var_17) : (((/* implicit */val<int>) var_0))))) ? (((((/* implicit */val<bool>) (val<short>)-15660)) ? (var_4) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)156))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 9223372036854775807LL)) ? (268435454) : (-1798003363))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)76;
long long int var_1 = 3217443416756724566LL;
unsigned char var_2 = (unsigned char)175;
short var_3 = (short)-10922;
long long int var_4 = -5392239847854478532LL;
int var_5 = -1835324668;
int var_6 = 1742220757;
unsigned short var_7 = (unsigned short)44227;
unsigned char var_8 = (unsigned char)150;
bool var_9 = (bool)1;
long long int var_10 = -3118032965043416298LL;
signed char var_12 = (signed char)-105;
short var_13 = (short)23384;
unsigned int var_14 = 3053562713U;
int var_15 = -662862068;
unsigned long long int var_16 = 16938778589228136168ULL;
int var_17 = -646098909;
int zero = 0;
unsigned long long int var_18 = 15547373028938351090ULL;
unsigned long long int var_19 = 7605580589383442049ULL;
signed char var_20 = (signed char)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1742220757ULL;
    value_mismatch |= var_19 != 44227ULL;
    value_mismatch |= var_20 != (signed char)-7;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_12, var_13, var_14, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
