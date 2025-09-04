/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6934
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6934
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
void test(val<unsigned char> var_0, val<unsigned int> var_1, val<short> var_2, val<short> var_3, val<unsigned long long int> var_4, val<short> var_6, val<short> var_10, val<int> zero, val<short*> var_12, val<unsigned int*> var_13, val<unsigned int*> var_14, val<unsigned int*> var_15, val<unsigned int*> var_16, val<signed char*> var_17, val<unsigned long long int*> var_18) {
    *var_12 = ((/* implicit */val<short>) var_1);
    *var_13 = ((/* implicit */val<unsigned int>) var_4);
    *var_14 = ((/* implicit */val<unsigned int>) var_0);
    if (((/* implicit */val<bool>) ((((/* implicit */val<int>) var_10)) % ((~(((/* implicit */val<int>) (val<unsigned char>)102)))))))
    {
        *var_15 = ((/* implicit */val<unsigned int>) var_2);
        *var_16 = ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) & (((val<unsigned int>) var_1)));
    }
    else
    {
        *var_17 = ((/* implicit */val<signed char>) 12591469308050899861ULL);
        *var_18 = ((/* implicit */val<unsigned long long int>) max((4111343331U), (((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) | (3461841729U)))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)172;
unsigned int var_1 = 2943589354U;
short var_2 = (short)10521;
short var_3 = (short)3151;
unsigned long long int var_4 = 1750835181805696033ULL;
short var_6 = (short)-4029;
short var_10 = (short)-10574;
int zero = 0;
short var_12 = (short)-25170;
unsigned int var_13 = 798162800U;
unsigned int var_14 = 2980401277U;
unsigned int var_15 = 2552079889U;
unsigned int var_16 = 2044673582U;
signed char var_17 = (signed char)-54;
unsigned long long int var_18 = 451677486437838008ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)-25622;
    value_mismatch |= var_13 != 1338569761U;
    value_mismatch |= var_14 != 172U;
    value_mismatch |= var_15 != 10521U;
    value_mismatch |= var_16 != 2943586370U;
    value_mismatch |= var_17 != (signed char)-54;
    value_mismatch |= var_18 != 451677486437838008ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_10, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
