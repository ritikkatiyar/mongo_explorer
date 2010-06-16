//
//  MEDatabase.h
//  Mongo Explorer
//
//  Created by François Beausoleil on 10-06-08.
//  Copyright 2010 Solutions Technologiques Internationales. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class MEConnection;

@interface MEDatabase : NSObject {
}

@property(nonatomic, retain) MEConnection *connection;
@property(nonatomic, copy) NSString *name;
@property(nonatomic, retain) NSArray *collections;
@property(nonatomic, readonly) NSString *description;

-(id)initWithInfo:(NSDictionary *)info connection:(MEConnection *)connection;

/* Reloads the collections in this database.
 */
-(NSArray *)reload;

@end
