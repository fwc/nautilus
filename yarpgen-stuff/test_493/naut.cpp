/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 493
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=493
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<unsigned int> var_0, val<short> var_1, val<unsigned short> var_2, val<unsigned char> var_3, val<long long int> var_5, val<unsigned short> var_7, val<unsigned short> var_8, val<signed char> var_9, val<unsigned long long int> var_12, val<int> var_13, val<int> var_15, val<int> zero, val<bool*> var_16, val<long long int*> var_17, val<int*> var_18, val<short*> var_19, val<bool*> var_20) {
    if (((/* implicit */val<bool>) (~(var_15))))
    {
        *var_16 = (((~(var_12))) < (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<short>) var_1)))));
        *var_17 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_7)) : (((((/* implicit */val<bool>) -7747816422655476438LL)) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) var_3))))))) ? (min((((((/* implicit */val<bool>) -7747816422655476438LL)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) (val<unsigned short>)18287)))), (((/* implicit */val<int>) var_1)))) : (var_13)));
    }

    *var_18 = ((/* implicit */val<int>) var_8);
    *var_19 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_3)) ? (var_0) : (((/* implicit */val<unsigned int>) var_15))));
    *var_20 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned short>) ((val<unsigned char>) var_2))), (((val<unsigned short>) 1705766191))))) ? (((/* implicit */val<int>) ((val<short>) ((((/* implicit */val<bool>) var_5)) ? (var_13) : (((/* implicit */val<int>) var_1)))))) : (var_15)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 626649476U;
short var_1 = (short)-16363;
unsigned short var_2 = (unsigned short)43888;
unsigned char var_3 = (unsigned char)74;
long long int var_5 = -6029407815315601107LL;
unsigned short var_7 = (unsigned short)14161;
unsigned short var_8 = (unsigned short)36394;
signed char var_9 = (signed char)57;
unsigned long long int var_12 = 16756264051193885124ULL;
int var_13 = 576447051;
int var_15 = -392720318;
int zero = 0;
bool var_16 = (bool)0;
long long int var_17 = 4845302244394928322LL;
int var_18 = 242653014;
short var_19 = (short)4295;
bool var_20 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != -16363LL;
    value_mismatch |= var_18 != 36394;
    value_mismatch |= var_19 != (short)-5756;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_7, var_8, var_9, var_12, var_13, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
