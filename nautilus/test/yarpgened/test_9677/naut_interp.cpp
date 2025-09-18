/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9677
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9677
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
void test(val<unsigned short> var_4, val<unsigned long long int> var_5, val<unsigned int> var_7, val<bool> var_8, val<unsigned int> var_9, val<unsigned int> var_10, val<int> zero, val<unsigned int*> var_12, val<bool*> var_13, val<signed char*> var_14, val<long long int*> var_15, val<bool*> var_16) {
    *var_12 = ((/* implicit */val<unsigned int>) min((((((/* implicit */val<int>) ((val<unsigned char>) var_4))) <= (((/* implicit */val<int>) ((val<short>) 9695496207410620724ULL))))), ((((!(((/* implicit */val<bool>) (val<short>)(-32767 - 1))))) && (((((/* implicit */val<bool>) var_5)) || (((/* implicit */val<bool>) var_10))))))));
    *var_13 = ((/* implicit */val<bool>) (-(min(((-(var_9))), (((/* implicit */val<unsigned int>) var_8))))));
    *var_14 = ((/* implicit */val<signed char>) var_7);
    *var_15 = ((/* implicit */val<long long int>) var_8);
    *var_16 = ((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) max((var_4), (((/* implicit */val<unsigned short>) var_8)))))))), (var_10)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)3183;
unsigned long long int var_5 = 10814774799852515894ULL;
unsigned int var_7 = 3454605915U;
bool var_8 = (bool)1;
unsigned int var_9 = 2729814750U;
unsigned int var_10 = 324574212U;
int zero = 0;
unsigned int var_12 = 2942999637U;
bool var_13 = (bool)0;
signed char var_14 = (signed char)45;
long long int var_15 = 4008141687812001375LL;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0U;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (signed char)91;
    value_mismatch |= var_15 != 1LL;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_7, var_8, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
