/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1514
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1514
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
void test(val<unsigned char> var_4, val<unsigned long long int> var_8, val<bool> var_10, val<unsigned long long int> var_13, val<long long int> var_14, val<unsigned char> var_16, val<bool> var_17, val<int> zero, val<bool*> var_18, val<unsigned long long int*> var_19, val<unsigned long long int*> var_20, val<unsigned char*> var_21) {
    *var_18 *= ((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) ((val<unsigned char>) 294195756U)))))) % (var_8)));
    *var_19 |= var_13;
    *var_20 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) ((((/* implicit */val<int>) var_10)) > (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_17))) == (var_13))))))), ((+(((/* implicit */val<int>) var_4))))));
    *var_21 = ((val<unsigned char>) ((((/* implicit */val<bool>) var_16)) ? (var_14) : (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_10)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)118;
unsigned long long int var_8 = 8374140198383599640ULL;
bool var_10 = (bool)1;
unsigned long long int var_13 = 15557387534374254286ULL;
long long int var_14 = -5537837241350990469LL;
unsigned char var_16 = (unsigned char)109;
bool var_17 = (bool)1;
int zero = 0;
bool var_18 = (bool)0;
unsigned long long int var_19 = 3028909349541526264ULL;
unsigned long long int var_20 = 9712057168462443348ULL;
unsigned char var_21 = (unsigned char)111;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != 18441951893073673982ULL;
    value_mismatch |= var_20 != 118ULL;
    value_mismatch |= var_21 != (unsigned char)123;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, var_10, var_13, var_14, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
