/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libBasebandManager.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libBasebandManager.dylib/libBasebandManager.dylib-Structs.h>
@interface ABMTapToRadar : NSObject {

	int fMode;
	queue* fQueue;
	unsigned fMaxUniqueSignatures;
	unsigned fMinTimeBetweenSameNotificationSec;
	map<unsigned long, unsigned long long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long long> > >* fPreviousNotifications;
	unique_ptr<Component, std::__1::default_delete<Component> >* fComponents[5];

}
+(id)sharedInstance;
-(id)init;
-(void)setMode:(int)arg1 ;
-(void)populateComponents_sync;
-(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)findLogFiles_sync:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg1 :(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg2 ;
-(BOOL)checkTraces_sync:(int)arg1 :(BOOL)arg2 ;
-(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)prepareRadar_sync:(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg1 :(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg2 :(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)arg3 ;
-(void)fileRadar_sync:(int)arg1 :(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg2 :(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg3 :(vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >*)arg4 ;
-(int)getMode;
-(void)showNotification:(int)arg1 :(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg2 :(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg3 :(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)arg4 :(double)arg5 ;
@end

