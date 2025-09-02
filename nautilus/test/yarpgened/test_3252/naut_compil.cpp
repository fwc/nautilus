/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3252
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3252
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<signed char> var_0, val<unsigned long long int> var_1, val<long long int> var_2, val<bool> var_4, val<unsigned int> var_6, val<unsigned int> var_8, val<unsigned long long int> var_10, val<signed char> var_17, val<int> zero, val<unsigned int*> var_18, val<short*> var_19, val<unsigned char*> var_20, val<long long int*> var_21) {
    *var_18 = ((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) (val<bool>)1))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_17)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) : (var_10))) <= (((/* implicit */val<unsigned long long int>) (+(8891025528136659873LL)))))))) / (((((((/* implicit */val<bool>) var_1)) ? (var_2) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)124))))) / (((((/* implicit */val<bool>) var_17)) ? (var_2) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))))))))))
    {
        *var_19 = ((/* implicit */val<short>) ((val<int>) (!((!(((/* implicit */val<bool>) var_6)))))));
        *var_20 = ((/* implicit */val<unsigned char>) (+((~(4294967280U)))));
        *var_21 = ((/* implicit */val<long long int>) min((*var_21), (((/* implicit */val<long long int>) var_8))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
unsigned long long int var_1 = 17565930555669390002ULL;
long long int var_2 = 2358660866883126248LL;
bool var_4 = (bool)1;
unsigned int var_6 = 4053662476U;
unsigned int var_8 = 3128197971U;
unsigned long long int var_10 = 4291326136293732449ULL;
signed char var_17 = (signed char)19;
int zero = 0;
unsigned int var_18 = 2127535667U;
short var_19 = (short)18735;
unsigned char var_20 = (unsigned char)202;
long long int var_21 = -2615362924445050150LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 4294967294U;
    value_mismatch |= var_19 != (short)1;
    value_mismatch |= var_20 != (unsigned char)15;
    value_mismatch |= var_21 != -2615362924445050150LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_8, var_10, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
