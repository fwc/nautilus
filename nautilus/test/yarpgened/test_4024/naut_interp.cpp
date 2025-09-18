/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4024
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4024
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
void test(val<unsigned long long int> var_0, val<unsigned long long int> var_2, val<unsigned long long int> var_5, val<bool> var_8, val<unsigned char> var_11, val<int> zero, val<long long int*> var_13, val<unsigned long long int*> var_14, val<unsigned short*> var_15, val<unsigned long long int*> var_16) {
    *var_13 += ((/* implicit */val<long long int>) (((~(((((/* implicit */val<bool>) var_2)) ? (var_0) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))))))) * (((/* implicit */val<unsigned long long int>) ((9223372036854775789LL) % (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<bool>) 9223372036854775789LL)))))))));
    *var_14 = ((/* implicit */val<unsigned long long int>) ((val<long long int>) (~(max((var_5), (var_2))))));
    *var_15 = ((/* implicit */val<unsigned short>) max((((val<int>) (val<bool>)0)), (((/* implicit */val<int>) var_8))));
    *var_16 = var_2;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10486572995514214157ULL;
unsigned long long int var_2 = 12787534502977740492ULL;
unsigned long long int var_5 = 1600572107871612655ULL;
bool var_8 = (bool)0;
unsigned char var_11 = (unsigned char)221;
int zero = 0;
long long int var_13 = -3243463697009436024LL;
unsigned long long int var_14 = 2186922020552115425ULL;
unsigned short var_15 = (unsigned short)43877;
unsigned long long int var_16 = 7451300772875139510ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -3243463697009436024LL;
    value_mismatch |= var_14 != 5659209570731811123ULL;
    value_mismatch |= var_15 != (unsigned short)0;
    value_mismatch |= var_16 != 12787534502977740492ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_8, var_11, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
