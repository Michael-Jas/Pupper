//
//  Dog.h
//  Pupper
//
//  Created by DetroitLabs on 7/18/16.
//  Copyright © 2016 DetroitLabs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Firebase.h"

@interface Dog : NSObject

@property (strong, nonatomic) NSString *dogName;
@property (strong, nonatomic) NSString *dogBreed;
@property (strong, nonatomic) NSString *dogAge;
@property (strong, nonatomic) NSString *dogAddress;
@property (strong, nonatomic) NSString *vetPhoneNumber;
@property (strong, nonatomic) NSString *dogBio;

@property (strong, nonatomic) NSString *currentUserID;
@property (strong, nonatomic) NSString *urlPath;


- (instancetype)initWithDogName:(NSString *)name age:(NSString*)age breed:(NSString *)breed address:(NSString *)address vetPhoneNub:(NSString *)vetPhoneNum bio:(NSString *)bio userID:(NSString *)userId dogPhotoURL:(NSString *)dogPhotoURL;


@end
