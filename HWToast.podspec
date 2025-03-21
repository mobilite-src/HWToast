Pod::Spec.new do |s|
  s.name         = "HWToast"
  s.version      = "1.0"
  s.summary      = "Show a toast with custom views in a flexible way."
  s.description  = "HWToast can display a toast with custom views in a flexible way. You can make a toast easily in a block."
  s.homepage     = "https://github.com/ChatGame/HWToast"

  # ―――  Spec License  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  s.license = { :type => "MIT", :file => "LICENSE" }
  # ――― Author Metadata  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  s.author = { "callmewhy" => "https://github.com/callmewhy" }
  # ――― Platform Specifics ――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  s.platform = :ios, "15.0"
  # ――― Source Location ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  s.source = { :git => "https://github.com/ChatGame/HWToast.git", :tag => "0.9" }
  # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  s.source_files  = "Sources/**/*.{h,m}"
  s.resource = "Sources/HWToastImage.bundle"
  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  s.requires_arc = true
end
