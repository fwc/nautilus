/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1710
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1710
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
void test(val<int> var_0, val<long long int> var_5, val<unsigned char> var_9, val<int> zero, val<unsigned long long int*> var_18, val<unsigned char*> var_19, val<int*> var_20, val<unsigned char*> var_21, val<int*> var_22) {
    *var_18 = ((/* implicit */val<unsigned long long int>) var_5);
    *var_19 = ((/* implicit */val<unsigned char>) max((*var_19), (((/* implicit */val<unsigned char>) min((((/* implicit */val<unsigned long long int>) (val<bool>)1)), (15947432791936047275ULL))))));
    *var_20 = ((/* implicit */val<int>) var_9);
    *var_21 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) var_9)) & (((/* implicit */val<int>) min((((val<short>) var_0)), (((/* implicit */val<short>) (val<bool>)0)))))));
    *var_22 = ((/* implicit */val<int>) 13294624536376881063ULL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -846768448;
long long int var_5 = 9104863489853807699LL;
unsigned char var_9 = (unsigned char)64;
int zero = 0;
unsigned long long int var_18 = 11619376540524427569ULL;
unsigned char var_19 = (unsigned char)85;
int var_20 = 1962671346;
unsigned char var_21 = (unsigned char)11;
int var_22 = 1399203946;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 9104863489853807699ULL;
    value_mismatch |= var_19 != (unsigned char)85;
    value_mismatch |= var_20 != 64;
    value_mismatch |= var_21 != (unsigned char)0;
    value_mismatch |= var_22 != -252727385;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_9, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
