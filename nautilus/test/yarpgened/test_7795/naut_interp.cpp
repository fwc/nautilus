/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7795
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7795
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
void test(val<int> var_1, val<long long int> var_2, val<bool> var_5, val<signed char> var_7, val<signed char> var_8, val<unsigned char> var_10, val<signed char> var_11, val<unsigned int> var_13, val<bool> var_16, val<int> zero, val<unsigned long long int*> var_17, val<unsigned short*> var_18, val<signed char*> var_19, val<unsigned int*> var_20) {
    *var_17 &= ((/* implicit */val<unsigned long long int>) max(((~(((/* implicit */val<int>) max((var_11), (((/* implicit */val<signed char>) var_5))))))), (((/* implicit */val<int>) min((var_10), (((/* implicit */val<unsigned char>) var_11)))))));
    *var_18 = ((/* implicit */val<unsigned short>) min((*var_18), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_1)) && (((/* implicit */val<bool>) var_13)))) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_7)) && (((/* implicit */val<bool>) var_1)))))))) && (((/* implicit */val<bool>) var_7)))))));
    *var_19 = ((/* implicit */val<signed char>) max((*var_19), (((/* implicit */val<signed char>) var_2))));
    *var_20 = (~(((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_16))) : ((~(var_13))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1235378787;
long long int var_2 = 327988940684904945LL;
bool var_5 = (bool)0;
signed char var_7 = (signed char)-71;
signed char var_8 = (signed char)101;
unsigned char var_10 = (unsigned char)108;
signed char var_11 = (signed char)-51;
unsigned int var_13 = 3748938600U;
bool var_16 = (bool)1;
int zero = 0;
unsigned long long int var_17 = 4013817516198017473ULL;
unsigned short var_18 = (unsigned short)49653;
signed char var_19 = (signed char)5;
unsigned int var_20 = 830130138U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 64ULL;
    value_mismatch |= var_18 != (unsigned short)1;
    value_mismatch |= var_19 != (signed char)5;
    value_mismatch |= var_20 != 4294967294U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_7, var_8, var_10, var_11, var_13, var_16, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
