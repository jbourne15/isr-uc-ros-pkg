FILE(REMOVE_RECURSE
  "../msg_gen"
  "../src/auction_msgs/msg"
  "../msg_gen"
  "CMakeFiles/ROSBUILD_genmsg_cpp"
  "../msg_gen/cpp/include/auction_msgs/Bid.h"
  "../msg_gen/cpp/include/auction_msgs/Auction.h"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/ROSBUILD_genmsg_cpp.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
