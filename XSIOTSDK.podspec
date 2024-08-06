Pod::Spec.new do |s|
  s.name                  = "XSIOTSDK"
  s.version               = "1.0.0"
  s.summary               = "XSIOTSDK"
  s.homepage              = "https://github.com/Wigger-H"
  s.license               = { :type => 'Copyright', :text => "Wigger-INC copyright" }
  s.author                = { "huangwei" => "huangwei@163.com" }
  s.source                = { :http => "https://github.com/Wigger-H/XSIOTSDK.git", :tag => "#{s.version}" }
  s.platform     		  = :ios, '10.0'
  s.vendored_frameworks = 'XSIOTSDK/XSIOTSDK.framework'
  s.requires_arc = true
end
