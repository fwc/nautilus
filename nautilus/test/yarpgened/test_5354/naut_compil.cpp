/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5354
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5354
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
void test(val<unsigned long long int> var_0, val<signed char> var_6, val<unsigned long long int> var_7, val<unsigned int> var_8, val<unsigned char> var_9, val<short> var_14, val<int> zero, val<short*> var_16, val<short*> var_17, val<unsigned long long int*> var_18, val<unsigned char*> var_19) {
    *var_16 = ((/* implicit */val<short>) (-((-(var_7)))));
    if (((/* implicit */val<bool>) (~((~((~(((/* implicit */val<int>) var_14)))))))))
    {
        *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_6)) : (((((/* implicit */val<bool>) min((9223372036854775807LL), (((/* implicit */val<long long int>) var_9))))) ? (((((((/* implicit */val<int>) var_14)) + (2147483647))) >> (((12725722974752248185ULL) - (12725722974752248177ULL))))) : (((/* implicit */val<int>) ((val<short>) var_0)))))));
        *var_18 = ((/* implicit */val<unsigned long long int>) min((*var_18), (((/* implicit */val<unsigned long long int>) var_14))));
        *var_19 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) ((val<unsigned char>) (-(var_8)))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7247650034900144047ULL;
signed char var_6 = (signed char)-21;
unsigned long long int var_7 = 7535398060490519624ULL;
unsigned int var_8 = 2800029320U;
unsigned char var_9 = (unsigned char)66;
short var_14 = (short)-27969;
int zero = 0;
short var_16 = (short)1915;
short var_17 = (short)-4440;
unsigned long long int var_18 = 8231662401706661661ULL;
unsigned char var_19 = (unsigned char)202;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)29768;
    value_mismatch |= var_17 != (short)-21;
    value_mismatch |= var_18 != 8231662401706661661ULL;
    value_mismatch |= var_19 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_7, var_8, var_9, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
