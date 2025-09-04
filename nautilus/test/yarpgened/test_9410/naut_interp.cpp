/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9410
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9410
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
void test(val<signed char> var_1, val<unsigned long long int> var_3, val<unsigned char> var_12, val<long long int> var_13, val<unsigned long long int> var_17, val<unsigned short> var_19, val<int> zero, val<int*> var_20, val<short*> var_21, val<unsigned int*> var_22) {
    *var_20 = ((/* implicit */val<int>) min((var_12), (((/* implicit */val<unsigned char>) (!((!(((/* implicit */val<bool>) var_13)))))))));
    *var_21 = ((/* implicit */val<short>) min((((/* implicit */val<int>) ((((/* implicit */val<int>) ((var_17) != (var_3)))) < (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_19))))))), (28047996)));
    *var_22 ^= ((/* implicit */val<unsigned int>) (val<unsigned short>)32512);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-75;
unsigned long long int var_3 = 9013470458568657883ULL;
unsigned char var_12 = (unsigned char)97;
long long int var_13 = 9085039680122748291LL;
unsigned long long int var_17 = 10670987890538211780ULL;
unsigned short var_19 = (unsigned short)46997;
int zero = 0;
int var_20 = -1199567431;
short var_21 = (short)27615;
unsigned int var_22 = 1940626204U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1;
    value_mismatch |= var_21 != (short)0;
    value_mismatch |= var_22 != 1940644892U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_12, var_13, var_17, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
