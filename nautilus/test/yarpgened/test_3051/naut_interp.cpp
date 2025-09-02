/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3051
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3051
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
void test(val<unsigned int> var_0, val<unsigned long long int> var_5, val<unsigned long long int> var_8, val<bool> var_12, val<int> zero, val<long long int*> var_15, val<unsigned int*> var_16, val<unsigned int*> var_17) {
    *var_15 = ((/* implicit */val<long long int>) (val<bool>)0);
    *var_16 -= ((/* implicit */val<unsigned int>) ((val<signed char>) ((((/* implicit */val<bool>) min((var_0), (((/* implicit */val<unsigned int>) (val<unsigned short>)65535))))) && (((/* implicit */val<bool>) ((var_12) ? (((/* implicit */val<unsigned int>) 2033967758)) : (134217727U)))))));
    *var_17 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (((+(((/* implicit */val<int>) (val<bool>)1)))) * (((/* implicit */val<int>) ((val<unsigned char>) (val<bool>)1)))))) ? (18158513697557839872ULL) : ((((((val<bool>)0) ? (var_5) : (var_8))) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_12)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2341413235U;
unsigned long long int var_5 = 17555889804857747556ULL;
unsigned long long int var_8 = 17146478134114509355ULL;
bool var_12 = (bool)0;
int zero = 0;
long long int var_15 = -6286100207712300012LL;
unsigned int var_16 = 3027115228U;
unsigned int var_17 = 944868669U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0LL;
    value_mismatch |= var_16 != 3027115227U;
    value_mismatch |= var_17 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_8, var_12, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
