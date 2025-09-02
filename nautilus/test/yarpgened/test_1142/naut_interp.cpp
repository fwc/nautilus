/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1142
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1142
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
void test(val<unsigned int> var_0, val<short> var_1, val<signed char> var_2, val<unsigned char> var_4, val<int> var_5, val<unsigned int> var_6, val<unsigned char> var_8, val<bool> var_9, val<unsigned char> var_10, val<short> var_12, val<long long int> var_13, val<unsigned char> var_14, val<int> var_15, val<unsigned char> var_16, val<bool> var_17, val<unsigned int> var_18, val<int> zero, val<bool*> var_19, val<unsigned char*> var_20, val<unsigned long long int*> var_21, val<unsigned long long int*> var_22, val<unsigned char*> var_23, val<unsigned char*> var_24, val<int*> var_25) {
    if (((/* implicit */val<bool>) var_1))
    {
        *var_19 = ((/* implicit */val<bool>) ((val<int>) var_10));
        *var_20 = ((/* implicit */val<unsigned char>) (+(((/* implicit */val<int>) var_8))));
    }

    if (((/* implicit */val<bool>) (((val<bool>)0) ? (var_13) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_4)) & (((/* implicit */val<int>) (val<bool>)0))))) : (var_18)))))))
    {
        *var_21 = ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) var_6)) ? (var_0) : (((/* implicit */val<unsigned int>) var_15)))) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_12)) || (((/* implicit */val<bool>) max((var_5), (((/* implicit */val<int>) (val<bool>)1)))))))))));
        *var_22 = ((/* implicit */val<unsigned long long int>) (((!(((((/* implicit */val<bool>) var_14)) && (((/* implicit */val<bool>) (val<unsigned short>)0)))))) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) min((((/* implicit */val<int>) (val<bool>)1)), (var_15)))) && ((val<bool>)0))))));
        *var_23 |= ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned int>) ((val<int>) 5139180406923834806LL))) != (((val<unsigned int>) max((var_16), (((/* implicit */val<unsigned char>) var_17)))))));
        *var_24 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) min((((/* implicit */val<int>) ((val<unsigned short>) var_15))), ((-(((/* implicit */val<int>) var_8))))))) ? (min((((/* implicit */val<unsigned int>) ((val<bool>) var_13))), (min((((/* implicit */val<unsigned int>) var_2)), (var_0))))) : (((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) (val<short>)10224)), ((~(((/* implicit */val<int>) (val<short>)10224)))))))));
    }

    *var_25 = (((!(((((/* implicit */val<bool>) var_16)) || (var_9))))) ? (var_5) : (((/* implicit */val<int>) var_1)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 843927939U;
short var_1 = (short)-20468;
signed char var_2 = (signed char)123;
unsigned char var_4 = (unsigned char)108;
int var_5 = 1582212686;
unsigned int var_6 = 599892274U;
unsigned char var_8 = (unsigned char)223;
bool var_9 = (bool)0;
unsigned char var_10 = (unsigned char)126;
short var_12 = (short)31757;
long long int var_13 = 7352190877967546235LL;
unsigned char var_14 = (unsigned char)10;
int var_15 = -1624252043;
unsigned char var_16 = (unsigned char)201;
bool var_17 = (bool)1;
unsigned int var_18 = 2322139435U;
int zero = 0;
bool var_19 = (bool)0;
unsigned char var_20 = (unsigned char)38;
unsigned long long int var_21 = 14317765899915845327ULL;
unsigned long long int var_22 = 6068247472415286329ULL;
unsigned char var_23 = (unsigned char)101;
unsigned char var_24 = (unsigned char)175;
int var_25 = -1704709857;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (unsigned char)223;
    value_mismatch |= var_21 != 14317765899915845327ULL;
    value_mismatch |= var_22 != 6068247472415286329ULL;
    value_mismatch |= var_23 != (unsigned char)101;
    value_mismatch |= var_24 != (unsigned char)175;
    value_mismatch |= var_25 != -20468;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_8, var_9, var_10, var_12, var_13, var_14, var_15, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
