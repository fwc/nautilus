/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2188
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2188
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
void test(val<int> var_3, val<long long int> var_7, val<long long int> var_8, val<int> var_16, val<int> zero, val<int*> var_17, val<unsigned long long int*> var_18, val<unsigned long long int*> var_19, val<unsigned long long int*> var_20) {
    *var_17 = ((/* implicit */val<int>) (~(((((2124026884526387304ULL) & (((/* implicit */val<unsigned long long int>) var_8)))) + (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 7034640896428010546LL)) ? (var_16) : (var_3))))))));
    *var_18 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) 8843523169762758599ULL)))))) < ((~(((1688849860263936ULL) & (((/* implicit */val<unsigned long long int>) 1910646655))))))));
    *var_19 = ((/* implicit */val<unsigned long long int>) (-((-(7916634871056135935LL)))));
    *var_20 = ((((/* implicit */val<bool>) ((-1269240171) + (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 5712657681005182238LL)))))))) ? (((/* implicit */val<unsigned long long int>) var_7)) : ((-(((1ULL) & (((/* implicit */val<unsigned long long int>) var_16)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1192603457;
long long int var_7 = -8184350466676556963LL;
long long int var_8 = 5718968570945581638LL;
int var_16 = -317023392;
int zero = 0;
int var_17 = -1120406898;
unsigned long long int var_18 = 2414308652594579936ULL;
unsigned long long int var_19 = 3043855992596033530ULL;
unsigned long long int var_20 = 12566136069600175039ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -363580321;
    value_mismatch |= var_18 != 1ULL;
    value_mismatch |= var_19 != 7916634871056135935ULL;
    value_mismatch |= var_20 != 10262393607032994653ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_8, var_16, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
