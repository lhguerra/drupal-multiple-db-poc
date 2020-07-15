# Drupal Multiple Database Proof of Concept
This repository exists to demonstrate how to work with custom entities in a database that is not Drupal's default one.

## Dependencies
 - Docker
 - Docker-compose
 - Make

## How to Try It

### Installing locally
 - Clone this repository
 - Run `make`
 - If everything went right, you should be able to access your Drupal site in your localhost
 - Access admin area with `admin` as user and `123456` as password

## Where to look
### Default Entity
The entity "Default Entity" was create to be stored in a secondary database, create content at `admin/structure/default_entity/add` see the list at `/admin/structure/default_entity`.
### View test
A view named "Default" was created to show that it works just fine! Just look at `/admin/structure/views/view/default`
### Search api
A very basic and useless search was implemented with Search Api Database module (submodule of Search Api). See it at `/admin/structure/views/view/default_search`
### GraphQL
My favorite one. Go to `/graphql/explorer` and run the following query:
```
{
  defaultEntityQuery {
    entities {
      ... on DefaultEntity {
        id
        name
        tags {
          targetId
        }
      }
    }
  }
}
```
Now this last one helps to show one very interesting thing: we can make relations between entities from different databases! It is not magic, just EntityStorage doing its job :D 
