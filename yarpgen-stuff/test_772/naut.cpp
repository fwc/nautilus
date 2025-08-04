/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 772
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=772
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<long long int> var_2, val<signed char> var_3, val<bool> var_4, val<unsigned short> var_5, val<unsigned char> var_6, val<unsigned short> var_9, val<bool> var_13, val<unsigned short> var_14, val<int> zero, val<unsigned char*> var_18, val<unsigned int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned char>) ((((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))) / (var_2))) * (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_14)) * (((/* implicit */val<int>) var_13))))))) - (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned short>)35815)) == (((/* implicit */val<int>) (val<bool>)1)))))) != (((2251799813683200ULL) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6)))))))))));
    *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) var_13)) != (((/* implicit */val<int>) var_3))))) != (((((/* implicit */val<int>) (val<unsigned char>)27)) - (((/* implicit */val<int>) (val<bool>)1))))))) - (((((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<signed char>)103)) || (((/* implicit */val<bool>) 2333120090U))))) - (((((/* implicit */val<int>) var_4)) * (((/* implicit */val<int>) var_9))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2082699298687685952LL;
signed char var_3 = (signed char)-109;
bool var_4 = (bool)0;
unsigned short var_5 = (unsigned short)18475;
unsigned char var_6 = (unsigned char)144;
unsigned short var_9 = (unsigned short)22109;
bool var_13 = (bool)0;
unsigned short var_14 = (unsigned short)54867;
int zero = 0;
unsigned char var_18 = (unsigned char)9;
unsigned int var_19 = 1216402634U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)255;
    value_mismatch |= var_19 != 0U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_5, var_6, var_9, var_13, var_14, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
