/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOPhoneNumberResolving.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface GEOPhoneNumberResolverLocalProxy : NSObject <GEOPhoneNumberResolving> {

	GEOGenericContainer<unsigned short, (anonymous namespace)::PackReader, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, geo::GEOGenericContainerStrongReferenceTag, 64, 2097152, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type>* _packReaders;
	NSMutableDictionary* _mostPreferredLangauges;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)_localeChanged:(id)arg1 ;
-(void)resolvePhoneNumbers:(id)arg1 handler:(/*^block*/id)arg2 queue:(id)arg3 ;
-(shared_ptr<(anonymous namespace)::PackReader>*)readerForCountryCode:(unsigned short)arg1 ;
-(id)_internationalCodeForCountryCode:(id)arg1 ;
-(BOOL)decomposePhoneNumber:(id)arg1 country:(id)arg2 components:(PhoneNumberComponents*)arg3 ;
-(id)_localizedCountryNameForCountryCode:(id)arg1 ;
-(id)_localizedCountryNameForCountryCode:(id)arg1 languageCode:(id)arg2 ;
-(id)stringForLocationNameStrings:(const LocationNameStrings*)arg1 countryName:(id)arg2 ;
@end

