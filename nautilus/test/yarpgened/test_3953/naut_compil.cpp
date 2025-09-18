/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3953
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3953
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
void test(val<short> var_2, val<unsigned long long int> var_6, val<long long int> var_7, val<int> var_9, val<unsigned short> var_10, val<unsigned char> var_18, val<int> zero, val<short*> var_20, val<long long int*> var_21, val<signed char*> var_22) {
    *var_20 = ((/* implicit */val<short>) var_18);
    *var_21 = ((/* implicit */val<long long int>) min((*var_21), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((val<unsigned char>) var_7))) > (((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) 918546431)), (var_6)))) ? ((~(((/* implicit */val<int>) var_2)))) : ((((val<bool>)1) ? (var_9) : (((/* implicit */val<int>) var_10)))))))))));
    *var_22 &= ((/* implicit */val<signed char>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5383;
unsigned long long int var_6 = 7455876263871821987ULL;
long long int var_7 = -7997135855441706604LL;
int var_9 = -323727012;
unsigned short var_10 = (unsigned short)46341;
unsigned char var_18 = (unsigned char)171;
int zero = 0;
short var_20 = (short)5074;
long long int var_21 = -4179918618242934423LL;
signed char var_22 = (signed char)-126;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)171;
    value_mismatch |= var_21 != -4179918618242934423LL;
    value_mismatch |= var_22 != (signed char)-126;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_7, var_9, var_10, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
}
