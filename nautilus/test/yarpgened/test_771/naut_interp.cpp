/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 771
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=771
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
void test(val<bool> var_0, val<int> var_2, val<unsigned long long int> var_6, val<unsigned long long int> var_8, val<unsigned long long int> var_9, val<unsigned long long int> var_12, val<unsigned long long int> var_17, val<int> zero, val<unsigned char*> var_18, val<signed char*> var_19, val<long long int*> var_20, val<int*> var_21) {
    *var_18 = ((/* implicit */val<unsigned char>) min((((((var_9) << (((/* implicit */val<int>) var_0)))) % (var_8))), (var_6)));
    *var_19 = ((/* implicit */val<signed char>) (+(min((((/* implicit */val<unsigned long long int>) var_2)), (((((/* implicit */val<bool>) var_2)) ? (var_17) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-62)))))))));
    *var_20 = ((/* implicit */val<long long int>) var_12);
    *var_21 ^= ((/* implicit */val<int>) (val<unsigned short>)28515);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
int var_2 = -379923560;
unsigned long long int var_6 = 235417730913015221ULL;
unsigned long long int var_8 = 15740544468061077565ULL;
unsigned long long int var_9 = 8119176761159570500ULL;
unsigned long long int var_12 = 9521183073496426238ULL;
unsigned long long int var_17 = 282107409895184686ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)192;
signed char var_19 = (signed char)9;
long long int var_20 = -2904911227658973184LL;
int var_21 = 145018871;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)181;
    value_mismatch |= var_19 != (signed char)46;
    value_mismatch |= var_20 != -8925561000213125378LL;
    value_mismatch |= var_21 != 145006740;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_8, var_9, var_12, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
}
