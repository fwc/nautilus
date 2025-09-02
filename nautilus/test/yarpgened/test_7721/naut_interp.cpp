/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7721
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7721
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
void test(val<unsigned short> var_0, val<unsigned char> var_1, val<int> var_3, val<long long int> var_4, val<bool> var_9, val<unsigned short> var_11, val<unsigned long long int> var_13, val<bool> var_15, val<int> zero, val<int*> var_17, val<bool*> var_18, val<unsigned long long int*> var_19, val<bool*> var_20, val<signed char*> var_21) {
    *var_17 = ((/* implicit */val<int>) var_4);
    *var_18 = ((/* implicit */val<bool>) var_13);
    *var_19 = ((/* implicit */val<unsigned long long int>) var_3);
    *var_20 = var_9;
    *var_21 = ((/* implicit */val<signed char>) ((max(((!(((/* implicit */val<bool>) (val<unsigned short>)46942)))), (((var_15) || (((/* implicit */val<bool>) var_1)))))) ? (((/* implicit */val<int>) var_1)) : (min(((~(((/* implicit */val<int>) var_0)))), ((~(((/* implicit */val<int>) var_11))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41814;
unsigned char var_1 = (unsigned char)83;
int var_3 = -1618573694;
long long int var_4 = -9037644071624680307LL;
bool var_9 = (bool)0;
unsigned short var_11 = (unsigned short)35290;
unsigned long long int var_13 = 7065323607222130810ULL;
bool var_15 = (bool)1;
int zero = 0;
int var_17 = -1186340334;
bool var_18 = (bool)1;
unsigned long long int var_19 = 216015558078558727ULL;
bool var_20 = (bool)0;
signed char var_21 = (signed char)-63;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -1335534451;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != 18446744072090977922ULL;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != (signed char)83;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_9, var_11, var_13, var_15, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
