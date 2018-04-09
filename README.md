### React Native OneSignal SDK

This project is a fork of Geektime's OneSignal for React Native and was made after we encounter a lot of installation and compilation errors.
We added cocoapods support and some instructions on how to install the lib.

This project aims for detached or pure react-native projects.


## Installation:

1. `npm install --save https://github.com/SocialSkyInc/react-native-onesignal-sdk.git`
2. `react-native link` 
3. close your xcode
4. run `pod install` in YOUR_PROJECT_PATH/ios (where YOUR_PROJECT_PATH is the root of your project)
5. open xcode and let it indexing
6. go to YOUR_PROJECT_PATH/ios/Pods/OneSignal/iOS_SDK/OneSignalSDK/Framework and drag OneSignal.framework to your xcode Frameworks folder (not Pods folder)
7. clean and build


## Things to make sure

1. in the Podfile you should see the following line: pod 'react-native-onesignal-sdk', :path => '../node_modules/react-native-onesignal-sdk'
2. under Pods/Development Pods folder you should see a react-native-onesignal-sdk folder
3. in Header Search Path (Build Settings) you should see "${PODS_ROOT}/Headers/Public/react-native-onesignal-sdk" non-recursive


_Don't forget to follow OneSignal instructions on how to setup you OneSignal account._**


For Android:
https://documentation.onesignal.com/docs/generate-a-google-server-api-key


For iOS:
https://documentation.onesignal.com/docs/generate-an-ios-push-certificate


# Please feel free to open issues if any :)


[OneSignal](https://onesignal.com/) is a free push notification service for mobile apps. 

This SDK supports both Android and iOS react-native projects.
