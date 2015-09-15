Pod::Spec.new do |s|

  s.name         = "TWNetwork"
  s.version      = "1.0.2"
  s.summary      = "基础网络请求类库"
  s.homepage     = "https://github.com/laughmaker/TWNetwork"
  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author       = { "hezhendong" => "wskrdfeai@gmail.com" }
  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/laughmaker/TWNetwork.git", :tag => "1.0.2" }
  s.source_files = "Network/*"
  s.frameworks   = "UIKit", "CoreGraphics"

end
