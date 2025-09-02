/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7916
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7916
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
void test(val<unsigned short> var_0, val<unsigned short> var_1, val<unsigned long long int> var_5, val<unsigned long long int> var_8, val<long long int> var_10, val<int> zero, val<unsigned long long int*> var_11, val<long long int*> var_12, val<unsigned long long int*> var_13) {
    *var_11 = ((/* implicit */val<unsigned long long int>) var_1);
    *var_12 = -8LL;
    *var_13 = ((((/* implicit */val<bool>) max((min((18446744073709551597ULL), (var_8))), (((/* implicit */val<unsigned long long int>) max((var_0), (var_1))))))) ? (((/* implicit */val<unsigned long long int>) var_10)) : (var_5));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63033;
unsigned short var_1 = (unsigned short)47929;
unsigned long long int var_5 = 3775043237925848714ULL;
unsigned long long int var_8 = 18028018090204641493ULL;
long long int var_10 = 6653044701555602359LL;
int zero = 0;
unsigned long long int var_11 = 168615111165295573ULL;
long long int var_12 = 1634150326558230703LL;
unsigned long long int var_13 = 9987603326564753987ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 47929ULL;
    value_mismatch |= var_12 != -8LL;
    value_mismatch |= var_13 != 6653044701555602359ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_8, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
