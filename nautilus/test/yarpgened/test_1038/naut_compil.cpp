/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1038
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1038
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
void test(val<unsigned int> var_0, val<unsigned long long int> var_1, val<signed char> var_2, val<signed char> var_3, val<unsigned int> var_4, val<unsigned int> var_5, val<bool> var_6, val<signed char> var_7, val<long long int> var_8, val<bool> var_9, val<signed char> var_10, val<int> zero, val<unsigned int*> var_11, val<unsigned long long int*> var_12, val<signed char*> var_13, val<signed char*> var_14, val<signed char*> var_15) {
    *var_11 = ((/* implicit */val<unsigned int>) ((min(((((val<bool>)1) ? (var_0) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))))), (min((var_4), (((/* implicit */val<unsigned int>) (val<short>)2047)))))) >= (var_5)));
    if (((/* implicit */val<bool>) ((min((1152640029630136320ULL), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<short>)2039)) ? (var_0) : (var_5)))))) * (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_5)) ? (((val<unsigned int>) 1001477239332117268LL)) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (((val<bool>)1) || (((/* implicit */val<bool>) var_7))))))))))))
    {
        *var_12 = ((/* implicit */val<unsigned long long int>) ((val<unsigned int>) ((((/* implicit */val<bool>) var_10)) ? (var_8) : (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_6)) | (((/* implicit */val<int>) var_2))))))));
        *var_13 &= ((/* implicit */val<signed char>) var_6);
        *var_14 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((val<unsigned int>) (~(((/* implicit */val<int>) var_10)))))) > (((val<unsigned long long int>) ((((/* implicit */val<bool>) var_2)) && (var_9))))));
    }

    *var_15 = ((/* implicit */val<signed char>) (~(((/* implicit */val<int>) ((val<bool>) var_1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2581661434U;
unsigned long long int var_1 = 7560113658533699949ULL;
signed char var_2 = (signed char)82;
signed char var_3 = (signed char)6;
unsigned int var_4 = 1248815010U;
unsigned int var_5 = 821689282U;
bool var_6 = (bool)0;
signed char var_7 = (signed char)38;
long long int var_8 = 1376302206020913675LL;
bool var_9 = (bool)0;
signed char var_10 = (signed char)-89;
int zero = 0;
unsigned int var_11 = 3845498996U;
unsigned long long int var_12 = 14009973932624999823ULL;
signed char var_13 = (signed char)22;
signed char var_14 = (signed char)-58;
signed char var_15 = (signed char)116;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0U;
    value_mismatch |= var_12 != 2104920587ULL;
    value_mismatch |= var_13 != (signed char)0;
    value_mismatch |= var_14 != (signed char)1;
    value_mismatch |= var_15 != (signed char)-2;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
