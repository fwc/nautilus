/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 345
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=345
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_1, val<int> var_2, val<unsigned char> var_4, val<unsigned char> var_6, val<unsigned short> var_9, val<unsigned short> var_12, val<unsigned char> var_14, val<unsigned short> var_15, val<int> zero, val<unsigned int*> var_18, val<bool*> var_19, val<unsigned char*> var_20, val<signed char*> var_21, val<unsigned char*> var_22) {
    *var_18 |= ((/* implicit */val<unsigned int>) max((max(((-(134217724))), (((/* implicit */val<int>) var_9)))), ((+(min((((/* implicit */val<int>) var_15)), (134217711)))))));
    *var_19 = ((/* implicit */val<bool>) var_0);
    *var_20 = var_14;
    *var_21 -= ((/* implicit */val<signed char>) max((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_12)) : (var_2)))) ? (((((/* implicit */val<bool>) -134217725)) ? (((/* implicit */val<long long int>) 134217741)) : (8871051013081657433LL))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))))), (((/* implicit */val<long long int>) (+(134217712))))));
    *var_22 = ((/* implicit */val<unsigned char>) ((val<unsigned long long int>) max(((+(-134217712))), (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_0)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
unsigned long long int var_1 = 16036154838603701086ULL;
int var_2 = -691974239;
unsigned char var_4 = (unsigned char)122;
unsigned char var_6 = (unsigned char)101;
unsigned short var_9 = (unsigned short)34674;
unsigned short var_12 = (unsigned short)48677;
unsigned char var_14 = (unsigned char)165;
unsigned short var_15 = (unsigned short)58690;
int zero = 0;
unsigned int var_18 = 3246503638U;
bool var_19 = (bool)0;
unsigned char var_20 = (unsigned char)91;
signed char var_21 = (signed char)-77;
unsigned char var_22 = (unsigned char)163;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 3246520278U;
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (unsigned char)165;
    value_mismatch |= var_21 != (signed char)-90;
    value_mismatch |= var_22 != (unsigned char)60;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_9, var_12, var_14, var_15, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
