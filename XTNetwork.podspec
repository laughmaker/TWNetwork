Pod::Spec.new do |s|

  s.name         = "XTNetwork"
  s.version      = "1.0.0"
  s.summary      = "小图网络请求模块"
  s.homepage     = "https://coding.net/u/xiaotujieshu/p/XTNetwork_iOS"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "hezhendong" => "wskrdfeai@gmail.com" }
  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://git.coding.net/xiaotujieshu/XTNetwork_iOS.git", :tag => "1.0.0" }
  s.source_files = "Network/*"
  s.frameworks   = "UIKit", "CoreGraphics"

  #s.dependency "BlocksKit", "~> 1.4"

end
